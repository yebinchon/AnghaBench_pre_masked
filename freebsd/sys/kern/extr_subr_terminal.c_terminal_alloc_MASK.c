
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terminal_class {int dummy; } ;
struct terminal {void* tm_softc; struct terminal_class const* tm_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct terminal* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct terminal*) ;

struct terminal *
FUNC_2(const struct terminal_class *VAR_3, void *VAR_4)
{
 struct terminal *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct terminal), VAR_0, VAR_1|VAR_2);
 FUNC_1(VAR_5);

 VAR_5->tm_class = VAR_3;
 VAR_5->tm_softc = VAR_4;

 return (VAR_5);
}
