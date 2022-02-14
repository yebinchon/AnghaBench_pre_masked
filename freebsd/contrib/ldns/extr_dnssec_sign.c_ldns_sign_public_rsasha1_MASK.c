
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;
typedef int ldns_buffer ;
typedef int RSA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned char*,int ,unsigned char*,unsigned int*,int *) ;
 unsigned char* FUNC_1 (unsigned char*,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,unsigned int,scalar_t__) ;

ldns_rdf *
FUNC_7(ldns_buffer *VAR_4, RSA *VAR_5)
{
 unsigned char *VAR_6;
 unsigned int VAR_7;
 ldns_rdf *VAR_8;
 ldns_buffer *VAR_9;
 int VAR_10;

 VAR_7 = 0;
 VAR_9 = FUNC_4(VAR_0);
 if (!VAR_9) {
  return ((void*)0);
 }

 VAR_6 = FUNC_1((unsigned char*)FUNC_2(VAR_4),
      FUNC_5(VAR_4), ((void*)0));
 if (!VAR_6) {
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 VAR_10 = FUNC_0(VAR_2, VAR_6, VAR_3,
       (unsigned char*)FUNC_2(VAR_9),
       &VAR_7, VAR_5);
 if (VAR_10 != 1) {
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 VAR_8 = FUNC_6(VAR_1, VAR_7,
         FUNC_2(VAR_9));
 FUNC_3(VAR_9);
 return VAR_8;
}
