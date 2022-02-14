
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_iconv_std_shared {int is_dst_encoding; int is_src_encoding; } ;
struct _citrus_iconv_std_context {int sc_dst_encoding; int sc_src_encoding; } ;
struct _citrus_iconv {void* cv_closure; TYPE_1__* cv_shared; } ;
struct TYPE_2__ {struct _citrus_iconv_std_shared* ci_closure; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,char*,char*) ;
 struct _citrus_iconv_std_context* FUNC_2 (size_t) ;

__attribute__((used)) static int
FUNC_3(struct _citrus_iconv *VAR_1)
{
 const struct _citrus_iconv_std_shared *VAR_2 = VAR_1->cv_shared->ci_closure;
 struct _citrus_iconv_std_context *VAR_3;
 char *VAR_4;
 size_t VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_2->is_src_encoding);
 VAR_6 = FUNC_0(VAR_2->is_dst_encoding);

 VAR_5 = (VAR_7 + VAR_6)*2 + sizeof(struct _citrus_iconv_std_context);
 VAR_3 = FUNC_2(VAR_5);
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 VAR_4 = (char *)&VAR_3[1];
 if (VAR_7 > 0)
  FUNC_1(&VAR_3->sc_src_encoding, VAR_2->is_src_encoding,
      VAR_4, VAR_4+VAR_7);
 else
  FUNC_1(&VAR_3->sc_src_encoding, VAR_2->is_src_encoding,
      ((void*)0), ((void*)0));
 VAR_4 += VAR_7*2;
 if (VAR_6 > 0)
  FUNC_1(&VAR_3->sc_dst_encoding, VAR_2->is_dst_encoding,
      VAR_4, VAR_4+VAR_6);
 else
  FUNC_1(&VAR_3->sc_dst_encoding, VAR_2->is_dst_encoding,
      ((void*)0), ((void*)0));

 VAR_1->cv_closure = (void *)VAR_3;

 return (0);
}
