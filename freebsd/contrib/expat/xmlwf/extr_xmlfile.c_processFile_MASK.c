
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int XML_Parser ;
typedef int XML_Char ;
struct TYPE_2__ {int* retPtr; int parser; } ;
typedef TYPE_1__ PROCESS_ARGS ;


 scalar_t__ FUNC_0 (int ,char const*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static void
FUNC_2(const void *VAR_1, size_t VAR_2,
            const XML_Char *VAR_3, void *VAR_4)
{
  XML_Parser VAR_5 = ((PROCESS_ARGS *)VAR_4)->parser;
  int *VAR_6 = ((PROCESS_ARGS *)VAR_4)->retPtr;
  if (FUNC_0(VAR_5, (const char *)VAR_1, (int)VAR_2, 1) == VAR_0) {
    FUNC_1(VAR_5, VAR_3);
    *VAR_6 = 0;
  }
  else
    *VAR_6 = 1;
}
