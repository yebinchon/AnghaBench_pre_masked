
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct malo_hal {int mh_dev; } ;
struct firmware {size_t datasize; scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (int ,char*,char*,...) ;
 struct firmware* FUNC_3 (char*) ;
 int FUNC_4 (struct firmware const*,int ) ;
 int FUNC_5 (struct malo_hal*,int const*,scalar_t__,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct malo_hal *VAR_3, char *VAR_4)
{
 const struct firmware *VAR_5;
 const uint8_t *VAR_6;
 int VAR_7;
 size_t VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;

 VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_3->mh_dev, "could not read firmware %s!\n",
      VAR_4);
  return (VAR_0);
 }

 FUNC_2(VAR_3->mh_dev, "load %s firmware image (%zu bytes)\n",
     VAR_4, VAR_5->datasize);

 VAR_9 = 1;
 for (VAR_8 = 0; VAR_8 < VAR_5->datasize; VAR_8 += VAR_10) {
  VAR_10 = FUNC_1(256, VAR_5->datasize - VAR_8);
  VAR_6 = (const uint8_t *)VAR_5->data + VAR_8;

  VAR_7 = FUNC_5(VAR_3, VAR_6, VAR_10, VAR_9++,
      VAR_2);
  if (VAR_7 != 0)
   goto fail;
  FUNC_0(500);
 }





 VAR_7 = FUNC_5(VAR_3, ((void*)0), 0, VAR_9++, VAR_2);
 FUNC_0(100);

fail:
 FUNC_4(VAR_5, VAR_1);

 return (VAR_7);
}
