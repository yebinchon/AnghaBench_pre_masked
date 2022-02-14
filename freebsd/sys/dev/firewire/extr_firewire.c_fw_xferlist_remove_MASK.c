
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_xferlist {int dummy; } ;
struct fw_xfer {int dummy; } ;


 struct fw_xfer* FUNC_0 (struct fw_xferlist*) ;
 int FUNC_1 (struct fw_xferlist*) ;
 struct fw_xfer* FUNC_2 (struct fw_xfer*,int ) ;
 int FUNC_3 (struct fw_xfer*) ;
 int VAR_0 ;

void
FUNC_4(struct fw_xferlist *VAR_1)
{
 struct fw_xfer *VAR_2, *VAR_3;

 for (VAR_2 = FUNC_0(VAR_1); VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = FUNC_2(VAR_2, VAR_0);
  FUNC_3(VAR_2);
 }
 FUNC_1(VAR_1);
}
