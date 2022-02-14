
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {char* dirname; int * handle; } ;
typedef TYPE_1__ isc_dir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

isc_result_t
FUNC_6(isc_dir_t *VAR_3, const char *VAR_4) {
 char *VAR_5;
 size_t VAR_6;
 isc_result_t VAR_7 = VAR_1;

 FUNC_0(FUNC_1(VAR_3));
 FUNC_0(VAR_4 != ((void*)0));





 VAR_6 = FUNC_5(VAR_4) + 1;
 if (VAR_6 + 2 > sizeof(VAR_3->dirname))

  return (VAR_0);
 FUNC_4(VAR_3->dirname, VAR_4, VAR_6);




 VAR_5 = VAR_3->dirname + FUNC_5(VAR_3->dirname);
 if (VAR_3->dirname < VAR_5 && *(VAR_5 - 1) != '/')
  *VAR_5++ = '/';
 *VAR_5++ = '*';
 *VAR_5 = '\0';




 VAR_3->handle = FUNC_3(VAR_4);

 if (VAR_3->handle == ((void*)0))
  return FUNC_2(VAR_2);

 return (VAR_7);
}
