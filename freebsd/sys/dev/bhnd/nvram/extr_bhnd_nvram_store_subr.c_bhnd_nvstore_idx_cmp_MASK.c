
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_store {int data_caps; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct bhnd_nvram_store*,int ) ;
 int VAR_1 ;
 char* FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,void*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, const void *VAR_3, const void *VAR_4)
{
 struct bhnd_nvram_store *VAR_5;
 void *VAR_6, *VAR_7;
 const char *VAR_8, *VAR_9;
 const char *VAR_10, *VAR_11;
 int VAR_12;

 VAR_5 = VAR_2;
 VAR_6 = *(void * const *)VAR_3;
 VAR_7 = *(void * const *)VAR_4;

 FUNC_0(VAR_5, VAR_1);


 VAR_8 = FUNC_1(VAR_5->data, VAR_6);
 VAR_9 = FUNC_1(VAR_5->data, VAR_7);


 if (VAR_5->data_caps & VAR_0) {
  VAR_10 = FUNC_3(VAR_8);
  VAR_11 = FUNC_3(VAR_9);
 } else {
  VAR_10 = VAR_8;
  VAR_11 = VAR_9;
 }


 VAR_12 = FUNC_4(VAR_10, VAR_11);
 if (VAR_12 != 0 || VAR_3 == VAR_4)
  return (VAR_12);







 return (FUNC_2(VAR_5->data, VAR_6, VAR_7));
}
