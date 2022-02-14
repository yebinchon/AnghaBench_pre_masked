
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_key ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,size_t,int ) ;

__attribute__((used)) static ldns_status
FUNC_6(ldns_buffer *VAR_1, const ldns_key *VAR_2)
{
 ldns_status VAR_3;
 size_t VAR_4;
 ldns_rdf *VAR_5;

 FUNC_0(VAR_1, "Key: ");

  VAR_4 = FUNC_2(VAR_2);
 VAR_5 = FUNC_5(VAR_0, VAR_4, FUNC_1(VAR_2));
 VAR_3 = FUNC_3(VAR_1, VAR_5);
 FUNC_4(VAR_5);
 FUNC_0(VAR_1, "\n");
 return VAR_3;
}
