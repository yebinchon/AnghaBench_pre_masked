
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * hx509_peer_info ;
typedef int hx509_context ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_1, hx509_peer_info *VAR_2)
{
    *VAR_2 = FUNC_0(1, sizeof(**VAR_2));
    if (*VAR_2 == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    return 0;
}
