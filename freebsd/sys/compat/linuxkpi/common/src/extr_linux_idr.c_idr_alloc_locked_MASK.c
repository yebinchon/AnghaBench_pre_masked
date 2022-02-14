
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct idr*,void*,int,int*) ;
 int FUNC_1 (struct idr*,void*,int*) ;
 int FUNC_2 (struct idr*,int) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct idr *VAR_4, void *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = VAR_7 > 0 ? VAR_7 - 1 : VAR_2;
 int VAR_9;
 int VAR_10;

 FUNC_3(&VAR_4->lock, VAR_3);

 if (FUNC_4(VAR_6 < 0))
  return (-VAR_0);
 if (FUNC_4(VAR_8 < VAR_6))
  return (-VAR_1);

 if (VAR_6 == 0)
  VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_10);
 else
  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, &VAR_10);

 if (FUNC_4(VAR_9 < 0))
  return (VAR_9);
 if (FUNC_4(VAR_10 > VAR_8)) {
  FUNC_2(VAR_4, VAR_10);
  return (-VAR_1);
 }
 return (VAR_10);
}
