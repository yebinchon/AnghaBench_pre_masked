
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwi_dev {scalar_t__ did; scalar_t__ vid; int * desc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct bwi_dev* VAR_2 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 const struct bwi_dev *VAR_4;
 uint16_t VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_3);
 VAR_6 = FUNC_2(VAR_3);

 for (VAR_4 = VAR_2; VAR_4->desc != ((void*)0); ++VAR_4) {
  if (VAR_4->did == VAR_5 && VAR_4->vid == VAR_6) {
   FUNC_0(VAR_3, VAR_4->desc);
   return VAR_0;
  }
 }
 return VAR_1;
}
