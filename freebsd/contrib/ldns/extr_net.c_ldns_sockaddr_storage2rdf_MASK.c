
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; } ;
struct sockaddr_in {int sin_addr; int sin_port; } ;
typedef int ldns_rdf ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;

ldns_rdf *
FUNC_2(const struct sockaddr_storage *VAR_4, uint16_t *VAR_5)
{
        ldns_rdf *VAR_6;
        struct sockaddr_in *VAR_7;
        struct sockaddr_in6 *VAR_8;

        switch(VAR_4->ss_family) {
                case 129:
                        VAR_7 = (struct sockaddr_in*)VAR_4;
                        if (VAR_5) {
                                *VAR_5 = FUNC_1((uint16_t)VAR_7->sin_port);
                        }
                        VAR_6 = FUNC_0(VAR_2,
                                        VAR_0, &VAR_7->sin_addr);
                        break;
                case 128:
                        VAR_8 = (struct sockaddr_in6*)VAR_4;
                        if (VAR_5) {
                                *VAR_5 = FUNC_1((uint16_t)VAR_8->sin6_port);
                        }
                        VAR_6 = FUNC_0(VAR_3,
                                        VAR_1, &VAR_8->sin6_addr);
                        break;
                default:
                        if (VAR_5) {
                                *VAR_5 = 0;
                        }
                        return ((void*)0);
        }
        return VAR_6;
}
