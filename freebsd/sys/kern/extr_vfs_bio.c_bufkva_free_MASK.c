
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct buf {int b_kvasize; scalar_t__ b_kvabase; scalar_t__ b_data; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct buf *VAR_4)
{
 if (VAR_4->b_kvasize == 0)
  return;

 FUNC_5(VAR_0, (vm_offset_t)VAR_4->b_kvabase, VAR_4->b_kvasize);
 FUNC_4(VAR_2, -VAR_4->b_kvasize);
 FUNC_4(VAR_1, 1);
 VAR_4->b_data = VAR_4->b_kvabase = VAR_3;
 VAR_4->b_kvasize = 0;
}
