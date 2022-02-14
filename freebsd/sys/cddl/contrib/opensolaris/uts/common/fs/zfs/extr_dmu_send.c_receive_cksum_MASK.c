
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_arg {int cksum; scalar_t__ byteswap; } ;


 int FUNC_0 (void*,int,int *) ;
 int FUNC_1 (void*,int,int *) ;

__attribute__((used)) static void
FUNC_2(struct receive_arg *VAR_0, int VAR_1, void *VAR_2)
{
 if (VAR_0->byteswap) {
  (void) FUNC_0(VAR_2, VAR_1, &VAR_0->cksum);
 } else {
  (void) FUNC_1(VAR_2, VAR_1, &VAR_0->cksum);
 }
}
