
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct sc_ttysoftc {int st_index; int * st_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sc_ttysoftc* FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 struct tty* FUNC_1 (int *,struct sc_ttysoftc*,int *) ;
 int FUNC_2 (struct tty*,int *,char*,int) ;

__attribute__((used)) static struct tty *
FUNC_3(int VAR_4, int VAR_5)
{
 struct sc_ttysoftc *VAR_6;
 struct tty *VAR_7;


 VAR_6 = FUNC_0(sizeof(struct sc_ttysoftc), VAR_1, VAR_2);
 VAR_6->st_index = VAR_4;
 VAR_6->st_stat = ((void*)0);
 VAR_7 = FUNC_1(&VAR_3, VAR_6, &VAR_0);


 FUNC_2(VAR_7, ((void*)0), "v%r", VAR_5);

 return (VAR_7);
}
