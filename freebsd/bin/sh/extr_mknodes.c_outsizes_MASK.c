
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* tag; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, "static const short nodesize[%d] = {\n", VAR_1);
 for (VAR_3 = 0 ; VAR_3 < VAR_1 ; VAR_3++) {
  FUNC_0(VAR_2, "      ALIGN(sizeof (struct %s)),\n", VAR_0[VAR_3]->tag);
 }
 FUNC_0(VAR_2, "};\n");
}
