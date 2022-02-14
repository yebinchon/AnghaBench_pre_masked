
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbnambuf {size_t nb_len; int nb_last_id; char* nb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char*,size_t) ;
 int FUNC_2 (char*,size_t,...) ;
 size_t FUNC_3 (char*) ;

int
FUNC_4(struct mbnambuf *VAR_5, char *VAR_6, int VAR_7)
{
 char *VAR_8;
 size_t VAR_9, VAR_10;

 if (VAR_5->nb_len != 0 && VAR_7 != VAR_5->nb_last_id - 1) {




  return (VAR_0);
 }


 VAR_8 = &VAR_5->nb_buf[VAR_7 * VAR_3];
 VAR_9 = FUNC_3(VAR_6);
 VAR_10 = VAR_5->nb_len + VAR_9;
 if (VAR_10 > VAR_4 || VAR_10 > VAR_2) {



  return (VAR_1);
 }


 if (VAR_9 > VAR_3 && VAR_5->nb_len != 0) {
  if ((VAR_7 * VAR_3 + VAR_9 + VAR_5->nb_len) >
      sizeof(VAR_5->nb_buf))
   return (VAR_1);

  FUNC_1(VAR_8 + VAR_9, VAR_8 + VAR_3, VAR_5->nb_len);
 }


 FUNC_0(VAR_8, VAR_6, VAR_9);
 VAR_5->nb_len = VAR_10;
 VAR_5->nb_last_id = VAR_7;

 return (0);
}
