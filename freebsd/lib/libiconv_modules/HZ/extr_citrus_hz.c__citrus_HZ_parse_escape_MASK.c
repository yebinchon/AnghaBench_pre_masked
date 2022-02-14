
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* set; } ;
typedef TYPE_1__ escape_t ;
typedef int _HZEncodingInfo ;


 void* FUNC_0 (int *) ;
 void* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (void*,TYPE_1__*,int ) ;
 int FUNC_3 (int ,void*,char const*,int ) ;
 TYPE_1__* FUNC_4 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_3, const char *VAR_4, const char *VAR_5)
{
 _HZEncodingInfo *VAR_6;
 escape_t *VAR_7;
 void *VAR_8[2];

 VAR_6 = (_HZEncodingInfo *)VAR_3;
 VAR_7 = FUNC_4(1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 if (FUNC_6("0", VAR_4) == 0) {
  VAR_7->set = FUNC_0(VAR_6);
  FUNC_2(FUNC_0(VAR_6), VAR_7, VAR_1);
 } else if (FUNC_6("1", VAR_4) == 0) {
  VAR_7->set = FUNC_1(VAR_6);
  FUNC_2(FUNC_1(VAR_6), VAR_7, VAR_1);
 } else {
  FUNC_5(VAR_7);
  return (VAR_0);
 }
 VAR_8[0] = (void *)VAR_7;
 VAR_8[1] = (void *)VAR_6;
 return (FUNC_3(
     VAR_2, (void *)&VAR_8[0], VAR_5, FUNC_7(VAR_5)));
}
