
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fdc_data {int * ioff; int * ioh; int iot; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct fdc_data *VAR_0, int VAR_1, uint8_t VAR_2)
{

 FUNC_0(VAR_0->iot, VAR_0->ioh[VAR_1], VAR_0->ioff[VAR_1], VAR_2);
}
