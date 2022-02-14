
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpmkey ;
struct g_eli_metadata {unsigned char* md_mkeys; int md_keys; int md_keylen; int md_ealgo; } ;
typedef int enckey ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char const*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int,unsigned char*,int ) ;
 int FUNC_3 (unsigned char const*,int ,char*,int,unsigned char*,int ) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char const*) ;

int
FUNC_5(const struct g_eli_metadata *VAR_4, const unsigned char *VAR_5,
    unsigned char *VAR_6, unsigned VAR_7)
{
 unsigned char VAR_8[VAR_1];
 unsigned char VAR_9[VAR_3];
 const unsigned char *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7 > VAR_1)
  return (-1);




 FUNC_3(VAR_5, VAR_2, "\x01", 1, VAR_9, 0);

 VAR_10 = VAR_4->md_mkeys + VAR_1 * VAR_7;
 VAR_11 = (1 << VAR_7);
 if (!(VAR_4->md_keys & VAR_11))
  return (-1);
 FUNC_0(VAR_10, VAR_8, VAR_1);
 VAR_12 = FUNC_2(VAR_4->md_ealgo, VAR_8,
     VAR_1, VAR_9, VAR_4->md_keylen);
 if (VAR_12 != 0) {
  FUNC_1(VAR_8, sizeof(VAR_8));
  FUNC_1(VAR_9, sizeof(VAR_9));
  return (VAR_12);
 }
 if (FUNC_4(VAR_8, VAR_5)) {
  FUNC_0(VAR_8, VAR_6, VAR_0);
  FUNC_1(VAR_8, sizeof(VAR_8));
  FUNC_1(VAR_9, sizeof(VAR_9));
  return (0);
 }
 FUNC_1(VAR_9, sizeof(VAR_9));
 FUNC_1(VAR_8, sizeof(VAR_8));

 return (-1);
}
