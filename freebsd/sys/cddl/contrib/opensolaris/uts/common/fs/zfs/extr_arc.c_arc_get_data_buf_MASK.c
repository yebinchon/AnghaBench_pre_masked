
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int arc_buf_hdr_t ;
typedef scalar_t__ arc_buf_contents_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void*,int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void *
FUNC_5(arc_buf_hdr_t *VAR_3, uint64_t VAR_4, void *VAR_5)
{
 arc_buf_contents_t VAR_6 = FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_2);
 if (VAR_6 == VAR_1) {
  return (FUNC_3(VAR_4));
 } else {
  FUNC_0(VAR_6 == VAR_0);
  return (FUNC_4(VAR_4));
 }
}
