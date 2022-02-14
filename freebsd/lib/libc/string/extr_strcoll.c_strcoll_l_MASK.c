
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct xlocale_collate {scalar_t__ __collate_load_error; } ;
typedef int mbstate_t ;
typedef TYPE_1__* locale_t ;
struct TYPE_6__ {scalar_t__* components; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,char const**,size_t,int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,int *,TYPE_1__*) ;

int
FUNC_8(const char *VAR_1, const char *VAR_2, locale_t VAR_3)
{
 int VAR_4;
 wchar_t *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 wchar_t *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 const char *VAR_9, *VAR_10;
 mbstate_t VAR_11;
 mbstate_t VAR_12;
 size_t VAR_13, VAR_14;

 FUNC_4(&VAR_11, 0, sizeof (mbstate_t));
 FUNC_4(&VAR_12, 0, sizeof (mbstate_t));







 VAR_9 = VAR_1;
 VAR_10 = VAR_2;

 FUNC_0(VAR_3);
 struct xlocale_collate *VAR_15 =
  (struct xlocale_collate*)VAR_3->components[VAR_0];

 if (VAR_15->__collate_load_error)
  goto error;

 VAR_13 = FUNC_6(VAR_1) + 1;
 VAR_14 = FUNC_6(VAR_2) + 1;






 if ((VAR_5 = FUNC_2(VAR_13 * sizeof (wchar_t))) == ((void*)0))
  goto error;
 VAR_7 = VAR_5;
 if ((VAR_6 = FUNC_2(VAR_14 * sizeof (wchar_t))) == ((void*)0))
  goto error;
 VAR_8 = VAR_6;

 if ((FUNC_3(VAR_7, &VAR_9, VAR_13, &VAR_11, VAR_3)) == (size_t)-1)
  goto error;

 if ((FUNC_3(VAR_8, &VAR_10, VAR_14, &VAR_12, VAR_3)) == (size_t)-1)
  goto error;

 VAR_4 = FUNC_7(VAR_7, VAR_8, VAR_3);
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);

 return (VAR_4);

error:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return (FUNC_5(VAR_1, VAR_2));
}
