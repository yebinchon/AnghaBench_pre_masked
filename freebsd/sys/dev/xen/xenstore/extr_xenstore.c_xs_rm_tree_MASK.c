
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct xs_transaction {scalar_t__ id; } ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (char const**,int ) ;
 char* FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (struct xs_transaction,char*,char*,size_t*,char const***) ;
 struct sbuf* FUNC_7 (char const*,char const*) ;
 int FUNC_8 (struct xs_transaction,char*,char const*) ;
 int FUNC_9 (struct xs_transaction,int) ;
 int FUNC_10 (struct xs_transaction*) ;

int
FUNC_11(struct xs_transaction VAR_3, const char *VAR_4, const char *VAR_5)
{
 struct xs_transaction VAR_6;
 struct sbuf *VAR_7;
 struct sbuf *VAR_8;
 char *VAR_9;
 char *VAR_10;
 const char **VAR_11;
 int VAR_12;

retry:
 VAR_7 = FUNC_7(VAR_4, VAR_5);
 VAR_8 = FUNC_7(VAR_4, VAR_5);
 VAR_9 = FUNC_2(VAR_7);
 VAR_10 = FUNC_2(VAR_8);
 VAR_11 = ((void*)0);
 VAR_6.id = 0;

 if (VAR_3.id == 0) {
  VAR_12 = FUNC_10(&VAR_6);
  if (VAR_12 != 0)
   goto out;
  VAR_3 = VAR_6;
 }

 while (1) {
  u_int VAR_13;
  u_int VAR_14;

  VAR_12 = FUNC_6(VAR_3, VAR_10, "", &VAR_13, &VAR_11);
  if (VAR_12)
   goto out;

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   VAR_12 = FUNC_8(VAR_3, VAR_10, VAR_11[VAR_14]);
   if (VAR_12 == VAR_1) {
    struct sbuf *VAR_15;






    VAR_15 = FUNC_7(VAR_10, VAR_11[VAR_14]);
    FUNC_3(VAR_8);
    VAR_8 = VAR_15;
    VAR_10 = FUNC_2(VAR_8);
    break;
   } else if (VAR_12 != 0) {
    goto out;
   }
  }

  FUNC_1(VAR_11, VAR_2);
  VAR_11 = ((void*)0);

  if (VAR_14 == VAR_13) {
   char *VAR_16;


   VAR_12 = FUNC_8(VAR_3, VAR_10, "");
   if (VAR_12 != 0)
    goto out;

   if (!FUNC_4(VAR_10, VAR_9))
    break;


   VAR_16 = FUNC_5(VAR_10, '/');
   FUNC_0(VAR_16 != ((void*)0),
    ("xs_rm_tree: mangled path %s", VAR_10));
   *VAR_16 = '\0';
  }
 }

out:
 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
 if (VAR_11 != ((void*)0))
  FUNC_1(VAR_11, VAR_2);

 if (VAR_6.id != 0) {
  int VAR_17;

  VAR_17 = FUNC_9(VAR_6, VAR_12 != 0);
  VAR_3.id = 0;
  if (VAR_17 == VAR_0 && VAR_12 == 0)
   goto retry;
 }
 return (VAR_12);
}
