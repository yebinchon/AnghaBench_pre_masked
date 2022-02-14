
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nb {int snb_tran; int snb_name; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct nb_name {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct sockaddr*,int ) ;
 int FUNC_1 (struct nb_name*,int ) ;
 int FUNC_2 (struct nb_name*) ;
 int FUNC_3 (int,struct sockaddr_nb**) ;
 int FUNC_4 (char*) ;

int
FUNC_5(struct sockaddr *VAR_5, struct nb_name *VAR_6,
 struct sockaddr_nb **VAR_7)

{
 struct sockaddr_nb *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 && (VAR_5->sa_family != VAR_0 && VAR_5->sa_family != VAR_1))
  return VAR_3;
 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9 < VAR_4)
  return VAR_2;
 VAR_10 = FUNC_3(VAR_9, &VAR_8);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 != FUNC_1(VAR_6, VAR_8->snb_name))
  FUNC_4("a bug somewhere in the nb_name* code\n");
 if (VAR_5)
  FUNC_0(&VAR_8->snb_tran, VAR_5, VAR_5->sa_len);
 *VAR_7 = VAR_8;
 return 0;
}
