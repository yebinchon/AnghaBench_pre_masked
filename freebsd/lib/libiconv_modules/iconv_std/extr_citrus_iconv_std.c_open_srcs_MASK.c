
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _esdb {int db_num_charsets; TYPE_1__* db_charsets; } ;
struct _citrus_iconv_std_src_list {int dummy; } ;
struct _citrus_iconv_std_src {int ss_dsts; int ss_csid; } ;
struct TYPE_2__ {int ec_csid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _citrus_iconv_std_src_list*,struct _citrus_iconv_std_src*,int ) ;
 int FUNC_3 (struct _citrus_iconv_std_src_list*) ;
 int VAR_1 ;
 int FUNC_4 (struct _citrus_iconv_std_src*) ;
 struct _citrus_iconv_std_src* FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_1__*,struct _esdb const*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_7(struct _citrus_iconv_std_src_list *VAR_3,
    const struct _esdb *VAR_4, const struct _esdb *VAR_5)
{
 struct _citrus_iconv_std_src *VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;

 VAR_6 = FUNC_5(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_1(&VAR_6->ss_dsts);

 for (VAR_8 = 0; VAR_8 < VAR_4->db_num_charsets; VAR_8++) {
  VAR_9 = FUNC_6(&VAR_6->ss_dsts, &VAR_4->db_charsets[VAR_8], VAR_5);
  if (VAR_9)
   goto err;
  if (!FUNC_0(&VAR_6->ss_dsts)) {
   VAR_6->ss_csid = VAR_4->db_charsets[VAR_8].ec_csid;
   FUNC_2(VAR_3, VAR_6, VAR_2);
   VAR_6 = FUNC_5(sizeof(*VAR_6));
   if (VAR_6 == ((void*)0)) {
    VAR_9 = VAR_1;
    goto err;
   }
   VAR_7++;
   FUNC_1(&VAR_6->ss_dsts);
  }
 }
 FUNC_4(VAR_6);

 return (VAR_7 ? 0 : VAR_0);

err:
 FUNC_4(VAR_6);
 FUNC_3(VAR_3);
 return (VAR_9);
}
