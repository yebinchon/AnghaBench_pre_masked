
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mparse {int options; char const* os_s; TYPE_3__* man; int roff; } ;
typedef enum mandoc_os { ____Placeholder_mandoc_os } mandoc_os ;
struct TYPE_5__ {int os_e; TYPE_1__* first; int macroset; } ;
struct TYPE_6__ {TYPE_2__ meta; int * manmac; int * mdocmac; } ;
struct TYPE_4__ {int tok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct mparse* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int ,char const*,int) ;
 void* FUNC_3 (int ,int ) ;

struct mparse *
FUNC_4(int VAR_10, enum mandoc_os VAR_11, const char *VAR_12)
{
 struct mparse *VAR_13;

 VAR_13 = FUNC_0(1, sizeof(struct mparse));

 VAR_13->options = VAR_10;
 VAR_13->os_s = VAR_12;

 VAR_13->roff = FUNC_1(VAR_10);
 VAR_13->man = FUNC_2(VAR_13->roff, VAR_13->os_s,
  VAR_13->options & VAR_8 ? 1 : 0);
 if (VAR_13->options & VAR_7) {
  VAR_13->man->meta.macroset = VAR_1;
  if (VAR_13->man->mdocmac == ((void*)0))
   VAR_13->man->mdocmac = FUNC_3(VAR_4, VAR_5);
 } else if (VAR_13->options & VAR_6) {
  VAR_13->man->meta.macroset = VAR_0;
  if (VAR_13->man->manmac == ((void*)0))
   VAR_13->man->manmac = FUNC_3(VAR_3, VAR_2);
 }
 VAR_13->man->meta.first->tok = VAR_9;
 VAR_13->man->meta.os_e = VAR_11;
 return VAR_13;
}
