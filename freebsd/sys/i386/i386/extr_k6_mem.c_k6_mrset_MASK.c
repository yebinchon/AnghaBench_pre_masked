
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct mem_range_softc {int mr_ndesc; struct mem_range_desc* mr_desc; } ;
struct mem_range_desc {int mr_len; int mr_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct mem_range_desc*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct mem_range_desc*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct mem_range_softc *VAR_5, struct mem_range_desc *VAR_6, int *VAR_7)
{
 u_int64_t VAR_8;
 u_int32_t VAR_9;
 int VAR_10, VAR_11;

 switch (*VAR_7) {
 case 128:
  VAR_10 = FUNC_3(VAR_6, &VAR_9);
  if (VAR_10)
   return (VAR_10);
  for (VAR_11 = 0; VAR_11 < VAR_5->mr_ndesc; VAR_11++) {
   if (!VAR_5->mr_desc[VAR_11].mr_len) {
    VAR_5->mr_desc[VAR_11] = *VAR_6;
    goto out;
   }
   if (VAR_5->mr_desc[VAR_11].mr_base == VAR_6->mr_base &&
       VAR_5->mr_desc[VAR_11].mr_len == VAR_6->mr_len)
    return (VAR_0);
  }
  return (VAR_2);
 case 129:
  VAR_9 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_5->mr_ndesc; VAR_11++)
   if (VAR_5->mr_desc[VAR_11].mr_base == VAR_6->mr_base &&
       VAR_5->mr_desc[VAR_11].mr_len == VAR_6->mr_len) {
    FUNC_0(&VAR_5->mr_desc[VAR_11], sizeof(VAR_5->mr_desc[VAR_11]));
    goto out;
   }
  return (VAR_1);
 default:
  return (VAR_3);
 }
out:
 FUNC_1();
 FUNC_5();
 VAR_8 = FUNC_4(VAR_4);
 VAR_8 &= ~(0xffffffff << (32 * VAR_11));
 VAR_8 |= VAR_9 << (32 * VAR_11);
 FUNC_6(VAR_4, VAR_8);
 FUNC_5();
 FUNC_2();

 return (0);
}
