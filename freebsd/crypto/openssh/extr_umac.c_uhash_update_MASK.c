
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uhash_ctx_t ;
typedef int u_char ;
typedef long UWORD ;
typedef int UINT8 ;
typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_4__ {long msg_len; int hash; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,long,long,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int const*,long) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_4(uhash_ctx_t VAR_2, const u_char *VAR_3, long VAR_4)



{
    UWORD VAR_5, VAR_6;
    UINT64 VAR_7[VAR_1];
    UINT8 *VAR_8 = (UINT8 *)&VAR_7;

    if (VAR_2->msg_len + VAR_4 <= VAR_0) {
        FUNC_2(&VAR_2->hash, (const UINT8 *)VAR_3, VAR_4);
        VAR_2->msg_len += VAR_4;
    } else {

         VAR_5 = VAR_2->msg_len % VAR_0;
         if (VAR_2->msg_len == VAR_0)
             VAR_5 = VAR_0;

         if (VAR_5 + VAR_4 >= VAR_0) {




             if (VAR_5) {
                 VAR_6 = (VAR_0 - VAR_5);
                 FUNC_2(&VAR_2->hash, (const UINT8 *)VAR_3, VAR_6);
                 FUNC_1(&VAR_2->hash, VAR_8);
                 VAR_2->msg_len += VAR_6;
                 FUNC_3(VAR_2,(UINT32 *)VAR_8);
                 VAR_4 -= VAR_6;
                 VAR_3 += VAR_6;
             }


             while (VAR_4 >= VAR_0) {
                 FUNC_0(&VAR_2->hash, (const UINT8 *)VAR_3, VAR_0,
                                   VAR_0, VAR_8);
                 VAR_2->msg_len += VAR_0;
                 VAR_4 -= VAR_0;
                 VAR_3 += VAR_0;
                 FUNC_3(VAR_2,(UINT32 *)VAR_8);
             }
         }


         if (VAR_4) {
             FUNC_2(&VAR_2->hash, (const UINT8 *)VAR_3, VAR_4);
             VAR_2->msg_len += VAR_4;
         }
     }

    return (1);
}
