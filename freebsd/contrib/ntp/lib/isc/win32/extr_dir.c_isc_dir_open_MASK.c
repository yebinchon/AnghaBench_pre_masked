
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_5__ {scalar_t__ search_handle; char* dirname; } ;
typedef TYPE_1__ isc_dir_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

isc_result_t
FUNC_5(isc_dir_t *VAR_2, const char *VAR_3) {
 char *VAR_4;
 isc_result_t VAR_5;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(FUNC_1(VAR_2) && VAR_2->search_handle == VAR_0);





 if (FUNC_4(VAR_3) + 3 > sizeof(VAR_2->dirname))

  return (VAR_1);
 FUNC_3(VAR_2->dirname, VAR_3);




 VAR_4 = VAR_2->dirname + FUNC_4(VAR_2->dirname);
 if (VAR_2->dirname < VAR_4 && *(VAR_4 - 1) != '\\' && *(VAR_4 - 1) != ':')
  *VAR_4++ = '\\';
 *VAR_4++ = '*';
 *VAR_4 = '\0';




 VAR_5 = FUNC_2(VAR_2);

 return (VAR_5);
}
