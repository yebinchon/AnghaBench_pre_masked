
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_httpdfree_t ;
typedef int isc_buffer_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static isc_result_t
FUNC_4(const char *VAR_1, const char *VAR_2,
    void *VAR_3,
    unsigned int *VAR_4, const char **VAR_5,
    const char **VAR_6, isc_buffer_t *VAR_7,
    isc_httpdfree_t **VAR_8, void **VAR_9)
{
 static char VAR_10[] = "No such URL.";

 FUNC_0(VAR_1);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);

 *VAR_4 = 404;
 *VAR_5 = "No such URL";
 *VAR_6 = "text/plain";
 FUNC_2(VAR_7, VAR_10, FUNC_3(VAR_10));
 FUNC_1(VAR_7, FUNC_3(VAR_10));
 *VAR_8 = ((void*)0);
 *VAR_9 = ((void*)0);

 return (VAR_0);
}
