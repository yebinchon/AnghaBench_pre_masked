
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_wep_keys {size_t* len; scalar_t__ keys_set; int ** key; } ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (char*,int *,size_t) ;
 int * FUNC_2 (size_t) ;
 int * FUNC_3 (char*,size_t) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct hostapd_wep_keys *VAR_1, int VAR_2,
       char *VAR_3)
{
 size_t VAR_4 = FUNC_4(VAR_3);

 if (VAR_2 < 0 || VAR_2 > 3)
  return -1;

 if (VAR_4 == 0) {
  int VAR_5, VAR_6 = 0;

  FUNC_0(VAR_1->key[VAR_2], VAR_1->len[VAR_2]);
  VAR_1->key[VAR_2] = ((void*)0);
  VAR_1->len[VAR_2] = 0;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_1->key[VAR_5])
    VAR_6++;
  }
  if (!VAR_6)
   VAR_1->keys_set = 0;
  return 0;
 }

 if (VAR_1->key[VAR_2] != ((void*)0))
  return -1;

 if (VAR_3[0] == '"') {
  if (VAR_4 < 2 || VAR_3[VAR_4 - 1] != '"')
   return -1;
  VAR_4 -= 2;
  VAR_1->key[VAR_2] = FUNC_3(VAR_3 + 1, VAR_4);
  if (VAR_1->key[VAR_2] == ((void*)0))
   return -1;
  VAR_1->len[VAR_2] = VAR_4;
 } else {
  if (VAR_4 & 1)
   return -1;
  VAR_4 /= 2;
  VAR_1->key[VAR_2] = FUNC_2(VAR_4);
  if (VAR_1->key[VAR_2] == ((void*)0))
   return -1;
  VAR_1->len[VAR_2] = VAR_4;
  if (FUNC_1(VAR_3, VAR_1->key[VAR_2], VAR_4) < 0)
   return -1;
 }

 VAR_1->keys_set++;

 return 0;
}
