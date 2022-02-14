
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keyLen; int keyMaterial; int ek; int rk; int Nr; scalar_t__ direction; } ;
typedef TYPE_1__ keyInstance ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(keyInstance *VAR_6, BYTE VAR_7, int VAR_8,
 const char *VAR_9) {

 if (VAR_6 == ((void*)0)) {
  return VAR_1;
 }

 if ((VAR_7 == VAR_4) || (VAR_7 == VAR_3)) {
  VAR_6->direction = VAR_7;
 } else {
  return VAR_0;
 }

 if ((VAR_8 == 128) || (VAR_8 == 192) || (VAR_8 == 256)) {
  VAR_6->keyLen = VAR_8;
 } else {
  return VAR_2;
 }

 if (VAR_9 != ((void*)0)) {
  FUNC_0(VAR_6->keyMaterial, VAR_9, VAR_8/8);
 }


 if (VAR_7 == VAR_4) {
  VAR_6->Nr = FUNC_2(VAR_6->rk, VAR_6->keyMaterial, VAR_8);
 } else {
  VAR_6->Nr = FUNC_1(VAR_6->rk, VAR_6->keyMaterial, VAR_8);
 }
 FUNC_2(VAR_6->ek, VAR_6->keyMaterial, VAR_8);
 return VAR_5;
}
