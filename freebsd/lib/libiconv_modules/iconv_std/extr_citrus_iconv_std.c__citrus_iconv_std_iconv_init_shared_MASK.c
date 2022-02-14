
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_iconv_std_shared {int is_src_encoding; int is_dst_encoding; int is_srcs; int is_invalid; int is_use_invalid; } ;
struct _citrus_iconv_shared {struct _citrus_iconv_std_shared* ci_closure; } ;
struct _citrus_esdb {int db_invalid; int db_use_invalid; int db_len_variable; int db_variable; int db_encname; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct _citrus_esdb*,char const*) ;
 int FUNC_2 (struct _citrus_esdb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (struct _citrus_iconv_std_shared*) ;
 struct _citrus_iconv_std_shared* FUNC_6 (int) ;
 int FUNC_7 (int *,struct _citrus_esdb*,struct _citrus_esdb*) ;

__attribute__((used)) static int

FUNC_8(struct _citrus_iconv_shared *VAR_1,
    const char * __restrict VAR_2, const char * __restrict VAR_3)
{
 struct _citrus_esdb VAR_4, VAR_5;
 struct _citrus_iconv_std_shared *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto err0;
 }
 VAR_7 = FUNC_1(&VAR_5, VAR_2);
 if (VAR_7)
  goto err1;
 VAR_7 = FUNC_1(&VAR_4, VAR_3);
 if (VAR_7)
  goto err2;
 VAR_7 = FUNC_4(&VAR_6->is_src_encoding, VAR_5.db_encname,
     VAR_5.db_variable, VAR_5.db_len_variable);
 if (VAR_7)
  goto err3;
 VAR_7 = FUNC_4(&VAR_6->is_dst_encoding, VAR_4.db_encname,
     VAR_4.db_variable, VAR_4.db_len_variable);
 if (VAR_7)
  goto err4;
 VAR_6->is_use_invalid = VAR_4.db_use_invalid;
 VAR_6->is_invalid = VAR_4.db_invalid;

 FUNC_0(&VAR_6->is_srcs);
 VAR_7 = FUNC_7(&VAR_6->is_srcs, &VAR_5, &VAR_4);
 if (VAR_7)
  goto err5;

 FUNC_2(&VAR_5);
 FUNC_2(&VAR_4);
 VAR_1->ci_closure = VAR_6;

 return (0);

err5:
 FUNC_3(VAR_6->is_dst_encoding);
err4:
 FUNC_3(VAR_6->is_src_encoding);
err3:
 FUNC_2(&VAR_4);
err2:
 FUNC_2(&VAR_5);
err1:
 FUNC_5(VAR_6);
err0:
 return (VAR_7);
}
