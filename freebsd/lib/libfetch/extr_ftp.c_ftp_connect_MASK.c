
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url {int port; int host; } ;
typedef int conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int *,struct url*,struct url*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static conn_t *
FUNC_6(struct url *VAR_5, struct url *VAR_6, const char *VAR_7)
{
 conn_t *VAR_8;
 int VAR_9, VAR_10, VAR_11;



 int VAR_12 = VAR_0;


 VAR_10 = FUNC_0('d');
 VAR_11 = FUNC_0('v');
 if (FUNC_0('4'))
  VAR_12 = VAR_0;
 else if (FUNC_0('6'))
  VAR_12 = VAR_1;

 if (VAR_10)
  VAR_6 = ((void*)0);


 if (VAR_6) {

  VAR_8 = FUNC_2(VAR_6->host, VAR_6->port, VAR_12, VAR_11);
 } else {

  VAR_8 = FUNC_2(VAR_5->host, VAR_5->port, VAR_12, VAR_11);
  VAR_6 = ((void*)0);
 }


 if (VAR_8 == ((void*)0))

  return (((void*)0));


 if ((VAR_9 = FUNC_4(VAR_8)) != VAR_4)
  goto fouch;


 if ((VAR_9 = FUNC_3(VAR_8, VAR_5, VAR_6)) != VAR_3)
  goto fouch;




 return (VAR_8);

fouch:
 if (VAR_9 != -1)
  FUNC_5(VAR_9);
 FUNC_1(VAR_8);
 return (((void*)0));
}
