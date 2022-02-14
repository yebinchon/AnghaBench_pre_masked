
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_hal {int mh_dev; } ;
struct firmware {int datasize; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char*,...) ;
 struct firmware* FUNC_1 (char*) ;
 int FUNC_2 (struct firmware const*,int ) ;
 int FUNC_3 (struct malo_hal*,int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct malo_hal *VAR_4, char *VAR_5)
{
 const struct firmware *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_4->mh_dev, "could not read microcode %s!\n",
      VAR_5);
  return (VAR_0);
 }

 FUNC_0(VAR_4->mh_dev, "load %s firmware image (%zu bytes)\n",
     VAR_5, VAR_6->datasize);

 VAR_7 = FUNC_3(VAR_4, VAR_6->datasize, VAR_6->data, VAR_6->datasize,
  VAR_3);
 if (VAR_7 != 0)
  goto fail;


 VAR_7 = FUNC_3(VAR_4, 0, ((void*)0), 0, VAR_2);

fail:
 FUNC_2(VAR_6, VAR_1);

 return (VAR_7);
}
