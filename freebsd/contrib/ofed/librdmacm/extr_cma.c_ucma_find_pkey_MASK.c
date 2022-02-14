
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct cma_device {int verbs; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct cma_device *VAR_1, uint8_t VAR_2,
     __be16 VAR_3, uint16_t *VAR_4)
{
 int VAR_5, VAR_6;
 __be16 VAR_7;

 for (VAR_6 = 0, VAR_5 = 0; !VAR_5; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1->verbs, VAR_2, VAR_6, &VAR_7);
  if (!VAR_5 && VAR_3 == VAR_7) {
   *VAR_4 = (uint16_t) VAR_6;
   return 0;
  }
 }
 return FUNC_0(VAR_0);
}
