
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int opaque_type; int opaque_id; } ;
struct TYPE_4__ {int lsa_id; TYPE_1__ opaque_field; } ;
struct lsa_hdr {int ls_length; int ls_seq; int ls_age; int ls_type; int ls_options; TYPE_2__ un_lsa_id; int ls_router; } ;
typedef int netdissect_options ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*) ;



 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_8(netdissect_options *VAR_3,
                 register const struct lsa_hdr *VAR_4)
{
        u_int VAR_5;

        FUNC_4(VAR_4->ls_length);
        VAR_5 = FUNC_0(&VAR_4->ls_length);
        if (VAR_5 < sizeof(struct lsa_hdr)) {
                FUNC_3((VAR_3, "\n\t    Bogus length %u < header (%lu)", VAR_5,
                    (unsigned long)sizeof(struct lsa_hdr)));
                return(-1);
        }

        FUNC_4(VAR_4->ls_seq);
        FUNC_3((VAR_3, "\n\t  Advertising Router %s, seq 0x%08x, age %us, length %u",
                  FUNC_6(VAR_3, &VAR_4->ls_router),
                  FUNC_2(&VAR_4->ls_seq),
                  FUNC_0(&VAR_4->ls_age),
                  VAR_5 - (u_int)sizeof(struct lsa_hdr)));

        FUNC_4(VAR_4->ls_type);
        switch (VAR_4->ls_type) {

        case 128:
        case 130:
        case 129:
            FUNC_3((VAR_3, "\n\t    %s LSA (%d), Opaque-Type %s LSA (%u), Opaque-ID %u",
                   FUNC_7(VAR_1,"unknown",VAR_4->ls_type),
                   VAR_4->ls_type,

     FUNC_7(VAR_0,
      "unknown",
      *(&VAR_4->un_lsa_id.opaque_field.opaque_type)),
     *(&VAR_4->un_lsa_id.opaque_field.opaque_type),
     FUNC_1(&VAR_4->un_lsa_id.opaque_field.opaque_id)

                   ));
            break;


        default:
            FUNC_3((VAR_3, "\n\t    %s LSA (%d), LSA-ID: %s",
                   FUNC_7(VAR_1,"unknown",VAR_4->ls_type),
                   VAR_4->ls_type,
                   FUNC_6(VAR_3, &VAR_4->un_lsa_id.lsa_id)));
            break;
        }

        FUNC_4(VAR_4->ls_options);
        FUNC_3((VAR_3, "\n\t    Options: [%s]", FUNC_5(VAR_2, "none", VAR_4->ls_options)));

        return (VAR_5);
trunc:
 return (-1);
}
