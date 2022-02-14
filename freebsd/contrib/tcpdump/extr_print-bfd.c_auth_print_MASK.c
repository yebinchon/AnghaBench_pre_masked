
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct bfd_header_t {int dummy; } ;
struct bfd_auth_header_t {int auth_type; int auth_len; } ;
struct TYPE_5__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;



 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct bfd_auth_header_t const) ;
 int FUNC_3 (int const,int) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_7, register const u_char *VAR_8)
{
        const struct bfd_auth_header_t *VAR_9;
        int VAR_10;

        VAR_8 += sizeof (const struct bfd_header_t);
        VAR_9 = (const struct bfd_auth_header_t *)VAR_8;
        FUNC_2(*VAR_9);
        FUNC_1((VAR_7, "\n\tAuthentication: %s (%u), length: %u",
                 FUNC_5(VAR_6,"Unknown",VAR_9->auth_type),
                 VAR_9->auth_type,
                 VAR_9->auth_len));
                VAR_8 += 2;
                FUNC_1((VAR_7, "\n\t  Auth Key ID: %d", *VAR_8));

        switch(VAR_9->auth_type) {
            case 129:
                if (VAR_9->auth_len < VAR_3 ||
                    VAR_9->auth_len > VAR_2) {
                    FUNC_1((VAR_7, "[invalid length %d]",
                             VAR_9->auth_len));
                    break;
                }
                VAR_8++;
                FUNC_1((VAR_7, ", Password: "));

                if (FUNC_4(VAR_7, VAR_8, VAR_9->auth_len - 3,
                              VAR_7->ndo_snapend))
                    goto trunc;
                break;
            case 132:
            case 131:
                if (VAR_9->auth_len != VAR_0) {
                    FUNC_1((VAR_7, "[invalid length %d]",
                             VAR_9->auth_len));
                    break;
                }
                VAR_8 += 2;
                FUNC_3(*VAR_8, 4);
                FUNC_1((VAR_7, ", Sequence Number: 0x%08x", FUNC_0(VAR_8)));
                VAR_8 += 4;
                FUNC_3(*VAR_8, VAR_1);
                FUNC_1((VAR_7, "\n\t  Digest: "));
                for(VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
                    FUNC_1((VAR_7, "%02x", VAR_8[VAR_10]));
                break;
            case 128:
            case 130:
                if (VAR_9->auth_len != VAR_4) {
                    FUNC_1((VAR_7, "[invalid length %d]",
                             VAR_9->auth_len));
                    break;
                }
                VAR_8 += 2;
                FUNC_3(*VAR_8, 4);
                FUNC_1((VAR_7, ", Sequence Number: 0x%08x", FUNC_0(VAR_8)));
                VAR_8 += 4;
                FUNC_3(*VAR_8, VAR_5);
                FUNC_1((VAR_7, "\n\t  Hash: "));
                for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
                    FUNC_1((VAR_7, "%02x", VAR_8[VAR_10]));
                break;
        }
        return 0;

trunc:
        return 1;
}
