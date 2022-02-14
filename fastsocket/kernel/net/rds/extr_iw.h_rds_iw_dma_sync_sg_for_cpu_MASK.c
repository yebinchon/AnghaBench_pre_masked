
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,int ,int) ;
 int FUNC_1 (struct ib_device*,struct scatterlist*) ;
 int FUNC_2 (struct ib_device*,struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_3(struct ib_device *VAR_0,
  struct scatterlist *VAR_1, unsigned int VAR_2, int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  FUNC_0(VAR_0,
    FUNC_1(VAR_0, &VAR_1[VAR_4]),
    FUNC_2(VAR_0, &VAR_1[VAR_4]),
    VAR_3);
 }
}
