
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pe_cmd; int pe_flags; TYPE_1__* pe_ch; } ;
struct TYPE_6__ {scalar_t__ ch_optsize; } ;
typedef TYPE_1__ PE_CoffHdr ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int) ;

int
FUNC_1(PE *VAR_8, PE_CoffHdr *VAR_9)
{

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  VAR_7 = VAR_1;
  return (-1);
 }

 if (VAR_8->pe_cmd == VAR_6 || VAR_8->pe_flags & VAR_5) {
  VAR_7 = VAR_0;
  return (-1);
 }

 if (VAR_8->pe_ch == ((void*)0)) {
  if ((VAR_8->pe_ch = FUNC_0(sizeof(PE_CoffHdr))) == ((void*)0)) {
   VAR_7 = VAR_2;
   return (-1);
  }
 } else {

  if (VAR_8->pe_ch->ch_optsize != VAR_9->ch_optsize)
   VAR_8->pe_flags |= VAR_4;
 }

 *VAR_8->pe_ch = *VAR_9;

 VAR_8->pe_flags |= VAR_3;

 return (0);
}
