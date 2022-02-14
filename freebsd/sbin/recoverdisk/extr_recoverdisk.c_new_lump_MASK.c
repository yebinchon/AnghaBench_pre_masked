
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lump {int state; void* len; void* start; } ;
typedef void* off_t ;


 int FUNC_0 (int *,struct lump*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lump* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(off_t VAR_2, off_t VAR_3, int VAR_4)
{
 struct lump *VAR_5;

 VAR_5 = FUNC_2(sizeof *VAR_5);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "Malloc failed");
 VAR_5->start = VAR_2;
 VAR_5->len = VAR_3;
 VAR_5->state = VAR_4;
 FUNC_0(&VAR_1, VAR_5, VAR_0);
}
