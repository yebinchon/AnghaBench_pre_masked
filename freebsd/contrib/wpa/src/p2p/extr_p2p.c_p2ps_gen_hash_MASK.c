
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_data {int * wild_card_hash; } ;
typedef int str_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int,int const**,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(struct p2p_data *VAR_2, const char *VAR_3, u8 *VAR_4)
{
 u8 VAR_5[VAR_1];
 char VAR_6[256];
 const u8 *VAR_7;
 size_t VAR_8, VAR_9;

 if (!VAR_3 || !VAR_4)
  return 0;

 if (!VAR_3[0]) {
  FUNC_0(VAR_4, VAR_2->wild_card_hash, VAR_0);
  return 1;
 }

 VAR_7 = (u8 *) VAR_6;
 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9 >= sizeof(VAR_6))
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_3[VAR_8] >= 'A' && VAR_3[VAR_8] <= 'Z')
   VAR_6[VAR_8] = VAR_3[VAR_8] - 'A' + 'a';
  else
   VAR_6[VAR_8] = VAR_3[VAR_8];
 }

 if (FUNC_2(1, &VAR_7, &VAR_9, VAR_5))
  return 0;

 FUNC_0(VAR_4, VAR_5, VAR_0);
 return 1;
}
