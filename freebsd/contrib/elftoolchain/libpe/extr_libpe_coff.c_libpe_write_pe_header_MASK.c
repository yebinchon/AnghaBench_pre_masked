
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_6__ {scalar_t__ pe_cmd; int pe_flags; int pe_fd; TYPE_1__* pe_dh; } ;
struct TYPE_5__ {scalar_t__ dh_lfanew; } ;
typedef TYPE_2__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

off_t
FUNC_5(PE *VAR_8, off_t VAR_9)
{
 char VAR_10[4];

 if (VAR_8->pe_cmd == VAR_4 &&
     (VAR_8->pe_flags & VAR_1) == 0) {
  FUNC_0(VAR_8->pe_dh != ((void*)0));
  VAR_9 = FUNC_3(VAR_8->pe_fd, (off_t) VAR_8->pe_dh->dh_lfanew + 4,
      VAR_6);
  return (VAR_9);
 }





 if ((VAR_9 = FUNC_2(VAR_8, VAR_9, 8)) < 0)
  return (-1);

 FUNC_1(VAR_10, VAR_5);
 if (FUNC_4(VAR_8->pe_fd, VAR_10, sizeof(VAR_10)) != (ssize_t) sizeof(VAR_10)) {
  VAR_7 = VAR_0;
  return (-1);
 }

 VAR_9 += 4;

 VAR_8->pe_flags &= ~VAR_1;


 VAR_8->pe_flags |= VAR_2;
 VAR_8->pe_flags |= VAR_3;

 return (VAR_9);
}
