
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int u_char ;
struct TYPE_3__ {size_t sc_sectorsize; int sc_ekeylen; int sc_ealgo; } ;
struct geli_dev {TYPE_1__ sc; } ;
struct g_eli_key {int gek_key; } ;
typedef size_t off_t ;
typedef int gkey ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct g_eli_key*,int) ;
 int FUNC_1 (TYPE_1__*,size_t,int *,int) ;
 int FUNC_2 (TYPE_1__*,struct g_eli_key*,size_t) ;
 int FUNC_3 (int ,int ,int *,size_t,int ,int ,int *) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct geli_dev *VAR_2, off_t VAR_3, u_char *VAR_4, size_t VAR_5)
{
 u_char VAR_6[VAR_0];
 u_char *VAR_7;
 int VAR_8;
 off_t VAR_9;
 uint64_t VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 struct g_eli_key VAR_14;

 VAR_7 = VAR_4;

 VAR_13 = VAR_2->sc.sc_sectorsize;
 VAR_12 = VAR_5 / VAR_13;
 if (VAR_12 == 0) {






  VAR_13 = VAR_5;
  VAR_12 = 1;
 }

 for (VAR_11 = 0, VAR_9 = VAR_3; VAR_11 < VAR_12; VAR_11++, VAR_9 += VAR_13) {

  FUNC_1(&VAR_2->sc, VAR_9, VAR_6, VAR_0);


  VAR_10 = (VAR_9 >> VAR_1) / VAR_13;
  FUNC_2(&VAR_2->sc, &VAR_14, VAR_10);

  VAR_8 = FUNC_3(VAR_2->sc.sc_ealgo, 0, VAR_7, VAR_13,
      VAR_14.gek_key, VAR_2->sc.sc_ekeylen, VAR_6);

  if (VAR_8 != 0) {
   FUNC_0(&VAR_14, sizeof(VAR_14));
   FUNC_4("Failed to decrypt in geli_read()!");
   return (VAR_8);
  }
  VAR_7 += VAR_13;
 }
 FUNC_0(&VAR_14, sizeof(VAR_14));
 return (0);
}
