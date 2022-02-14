
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symfile {int filename; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct symfile* VAR_1 ;

__attribute__((used)) static struct symfile * FUNC_1(char * VAR_2)
{
 VAR_1[VAR_0++].filename = FUNC_0(VAR_2);
 return &VAR_1[VAR_0 - 1];
}
