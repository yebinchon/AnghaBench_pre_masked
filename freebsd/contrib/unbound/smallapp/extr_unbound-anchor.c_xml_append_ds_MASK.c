
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_data {int num_keys; int ds; int cdigest; int cdigtype; int calgo; int ctag; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct xml_data* VAR_0)
{

 FUNC_1(VAR_0->ds, ". IN DS ");
 FUNC_0(VAR_0->ds, VAR_0->ctag);
 FUNC_1(VAR_0->ds, " ");
 FUNC_0(VAR_0->ds, VAR_0->calgo);
 FUNC_1(VAR_0->ds, " ");
 FUNC_0(VAR_0->ds, VAR_0->cdigtype);
 FUNC_1(VAR_0->ds, " ");
 FUNC_0(VAR_0->ds, VAR_0->cdigest);
 FUNC_1(VAR_0->ds, "\n");
 VAR_0->num_keys++;
}
