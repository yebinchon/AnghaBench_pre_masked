
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IV; scalar_t__ mode; } ;
typedef TYPE_1__ cipherInstance ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(cipherInstance *VAR_6, BYTE VAR_7, char *VAR_8) {
 if ((VAR_7 == VAR_3) || (VAR_7 == VAR_1) || (VAR_7 == VAR_2)) {
  VAR_6->mode = VAR_7;
 } else {
  return VAR_0;
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_0(VAR_6->IV, VAR_8, VAR_4);
 } else {
  FUNC_1(VAR_6->IV, 0, VAR_4);
 }
 return VAR_5;
}
