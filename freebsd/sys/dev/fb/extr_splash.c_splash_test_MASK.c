
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; scalar_t__ data_size; int * data; scalar_t__ (* init ) (int ) ;} ;
typedef TYPE_1__ splash_decoder_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(splash_decoder_t *VAR_4)
{
 if (FUNC_1(VAR_4))
  return VAR_1;
 if (*VAR_4->init && (*VAR_4->init)(VAR_3)) {
  VAR_4->data = ((void*)0);
  VAR_4->data_size = 0;
  return VAR_0;
 }
 if (VAR_2)
  FUNC_0("splash: image decoder found: %s\n", VAR_4->name);
 return 0;
}
