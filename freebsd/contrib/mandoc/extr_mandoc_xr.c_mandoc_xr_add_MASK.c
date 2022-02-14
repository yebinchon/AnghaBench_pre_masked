
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mandoc_xr {char* sec; char* hashkey; char* name; int line; int pos; int count; struct mandoc_xr* next; } ;


 int FUNC_0 (struct mandoc_xr*) ;
 struct mandoc_xr* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 struct mandoc_xr* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,unsigned int,struct mandoc_xr*) ;
 int FUNC_5 (char*,char const**) ;
 unsigned int FUNC_6 (int *,char*,size_t,int ) ;
 int FUNC_7 (char const*) ;
 struct mandoc_xr* VAR_0 ;
 int * VAR_1 ;
 struct mandoc_xr* VAR_2 ;

int
FUNC_8(const char *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
 struct mandoc_xr *VAR_7, *VAR_8;
 const char *VAR_9;
 size_t VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 int VAR_14;
 uint32_t VAR_15;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_10 = FUNC_7(VAR_3) + 1;
 VAR_11 = FUNC_7(VAR_4) + 1;
 VAR_12 = VAR_10 + VAR_11;
 VAR_7 = FUNC_1(sizeof(*VAR_7) + VAR_12);
 VAR_7->next = ((void*)0);
 VAR_7->sec = VAR_7->hashkey;
 VAR_7->name = VAR_7->hashkey + VAR_10;
 VAR_7->line = VAR_5;
 VAR_7->pos = VAR_6;
 VAR_7->count = 1;
 FUNC_2(VAR_7->sec, VAR_3, VAR_10);
 FUNC_2(VAR_7->name, VAR_4, VAR_11);

 VAR_9 = VAR_7->hashkey + VAR_12;
 VAR_15 = FUNC_5(VAR_7->hashkey, &VAR_9);
 VAR_13 = FUNC_6(VAR_1, VAR_7->hashkey, VAR_12, VAR_15);
 if ((VAR_8 = FUNC_3(VAR_1, VAR_13)) == ((void*)0)) {
  FUNC_4(VAR_1, VAR_13, VAR_7);
  if (VAR_0 == ((void*)0))
   VAR_0 = VAR_7;
  else
   VAR_2->next = VAR_7;
  VAR_2 = VAR_7;
  return 0;
 }

 VAR_8->count++;
 VAR_14 = (VAR_8->line == -1) ^ (VAR_7->line == -1);
 if (VAR_7->line == -1)
  VAR_8->line = -1;
 FUNC_0(VAR_7);
 return VAR_14;
}
