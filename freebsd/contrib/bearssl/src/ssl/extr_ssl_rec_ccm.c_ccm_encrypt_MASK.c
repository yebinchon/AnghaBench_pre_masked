
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vtable; } ;
struct TYPE_5__ {unsigned char* iv; int tag_len; TYPE_1__ bc; int seq; } ;
typedef TYPE_2__ br_sslrec_ccm_context ;
typedef int br_ccm_context ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned char*,int,int,size_t,int ) ;
 int FUNC_5 (int *,int,unsigned char*,size_t) ;
 int FUNC_6 (unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int ) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static unsigned char *
FUNC_9(br_sslrec_ccm_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t *VAR_4)
{
 br_ccm_context VAR_5;
 unsigned char *VAR_6;
 unsigned char VAR_7[12], VAR_8[13];
 size_t VAR_9;

 VAR_6 = (unsigned char *)VAR_3;
 VAR_9 = *VAR_4;





 FUNC_8(VAR_7, VAR_0->iv, sizeof VAR_0->iv);
 FUNC_7(VAR_7 + 4, VAR_0->seq);




 FUNC_7(VAR_8, VAR_0->seq ++);
 VAR_8[8] = (unsigned char)VAR_1;
 FUNC_6(VAR_8 + 9, VAR_2);
 FUNC_6(VAR_8 + 11, VAR_9);




 FUNC_3(&VAR_5, &VAR_0->bc.vtable);
 FUNC_4(&VAR_5, VAR_7, sizeof VAR_7, sizeof VAR_8, VAR_9, VAR_0->tag_len);
 FUNC_0(&VAR_5, VAR_8, sizeof VAR_8);
 FUNC_1(&VAR_5);
 FUNC_5(&VAR_5, 1, VAR_6, VAR_9);
 FUNC_2(&VAR_5, VAR_6 + VAR_9);




 VAR_9 += 8 + VAR_0->tag_len;
 VAR_6 -= 13;
 FUNC_8(VAR_6 + 5, VAR_7 + 4, 8);
 VAR_6[0] = (unsigned char)VAR_1;
 FUNC_6(VAR_6 + 1, VAR_2);
 FUNC_6(VAR_6 + 3, VAR_9);
 *VAR_4 = VAR_9 + 5;
 return VAR_6;
}
