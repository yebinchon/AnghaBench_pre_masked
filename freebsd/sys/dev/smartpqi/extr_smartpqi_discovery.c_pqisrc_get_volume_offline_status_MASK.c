
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,scalar_t__*,int,scalar_t__*,scalar_t__) ;

__attribute__((used)) static uint8_t FUNC_4(pqisrc_softstate_t *VAR_6,
 uint8_t *VAR_7)
{
 int VAR_8 = VAR_1;
 uint8_t VAR_9 = VAR_2;
 uint8_t VAR_10;
 uint8_t *VAR_11 = ((void*)0);

 FUNC_0("IN\n");

 VAR_11 = FUNC_1(VAR_6, 64);
 if (!VAR_11)
  return VAR_0;


 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_5 | VAR_3,
  VAR_11, VAR_4);

 if (VAR_8)
  goto out;

 VAR_10 = VAR_11[3];


 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_5 | VAR_3,
  VAR_11, VAR_10 + VAR_4);
 if (VAR_8)
  goto out;

 VAR_9 = VAR_11[4];

out:
 FUNC_2(VAR_6, (char *)VAR_11, 64);
 FUNC_0("OUT\n");

 return VAR_9;
}
