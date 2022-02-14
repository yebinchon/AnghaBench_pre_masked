
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int version; int valid_to; int valid_from; int issuer; int subject; int sig; int sig_oid2; int sig_oid1; int dnsnames; int subject_id; int issuer_id; int serial; } ;
typedef TYPE_1__ x509_cert ;
typedef int x509_buf ;
struct TYPE_7__ {int digest; int valid_to; int valid_from; int issuer; int subject; } ;
typedef TYPE_2__ svn_x509_certinfo_t ;
typedef int svn_error_t ;
typedef int ptrdiff_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int *,int,int) ;
 void* FUNC_2 (int *,int) ;
 int * FUNC_3 (unsigned char const**,unsigned char const*,int*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,char const*,int,int *) ;
 int VAR_7 ;
 int * FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (unsigned char const**,unsigned char const*,int *) ;
 int FUNC_8 (int *,int *,unsigned char const**,unsigned char const*,int *) ;
 int FUNC_9 (int ,unsigned char const**,unsigned char const*) ;
 int FUNC_10 (unsigned char const**,unsigned char const*,int *,int *) ;
 int FUNC_11 (unsigned char const**,unsigned char const*,int *) ;
 int FUNC_12 (unsigned char const**,unsigned char const*,int *) ;
 int FUNC_13 (unsigned char const**,unsigned char const*,int *,int) ;
 int FUNC_14 (unsigned char const**,unsigned char const*,int*) ;
 int FUNC_15 (int *,int *,int *,int *) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*,int *,int *) ;

svn_error_t *
FUNC_17(svn_x509_certinfo_t **VAR_8,
                    const char *VAR_9,
                    apr_size_t VAR_10,
                    apr_pool_t *VAR_11,
                    apr_pool_t *VAR_12)
{
  svn_error_t *VAR_13;
  ptrdiff_t VAR_14;
  const unsigned char *VAR_15;
  const unsigned char *VAR_16;
  x509_cert *VAR_17;
  svn_x509_certinfo_t *VAR_18;

  VAR_17 = FUNC_2(VAR_12, sizeof(*VAR_17));
  VAR_15 = (const unsigned char *)VAR_9;
  VAR_14 = VAR_10;
  VAR_16 = VAR_15 + VAR_14;







  VAR_13 = FUNC_3(&VAR_15, VAR_16, &VAR_14, VAR_0 | VAR_1);
  if (VAR_13)
    return FUNC_6(VAR_3, VAR_13, ((void*)0));

  if (VAR_14 != (VAR_16 - VAR_15))
    {
      VAR_13 = FUNC_6(VAR_2, ((void*)0), ((void*)0));
      return FUNC_6(VAR_3, VAR_13, ((void*)0));
    }




  VAR_13 = FUNC_3(&VAR_15, VAR_16, &VAR_14, VAR_0 | VAR_1);
  if (VAR_13)
    return FUNC_6(VAR_3, VAR_13, ((void*)0));

  VAR_16 = VAR_15 + VAR_14;
  FUNC_0(FUNC_14(&VAR_15, VAR_16, &VAR_17->version));
  FUNC_0(FUNC_11(&VAR_15, VAR_16, &VAR_17->serial));
  FUNC_0(FUNC_7(&VAR_15, VAR_16, &VAR_17->sig_oid1));

  VAR_17->version++;

  if (VAR_17->version > 3)
    return FUNC_6(VAR_5, ((void*)0), ((void*)0));




  VAR_13 = FUNC_3(&VAR_15, VAR_16, &VAR_14, VAR_0 | VAR_1);
  if (VAR_13)
    return FUNC_6(VAR_3, VAR_13, ((void*)0));

  FUNC_0(FUNC_10(&VAR_15, VAR_15 + VAR_14, &VAR_17->issuer, VAR_12));







  FUNC_0(FUNC_8(&VAR_17->valid_from, &VAR_17->valid_to, &VAR_15, VAR_16,
                         VAR_12));




  VAR_13 = FUNC_3(&VAR_15, VAR_16, &VAR_14, VAR_0 | VAR_1);
  if (VAR_13)
    return FUNC_6(VAR_3, VAR_13, ((void*)0));

  FUNC_0(FUNC_10(&VAR_15, VAR_15 + VAR_14, &VAR_17->subject, VAR_12));






  VAR_13 = FUNC_3(&VAR_15, VAR_16, &VAR_14, VAR_0 | VAR_1);
  if (VAR_13)
    return FUNC_6(VAR_3, VAR_13, ((void*)0));


  VAR_15 += VAR_14;
  VAR_17->dnsnames = FUNC_1(VAR_12, 3, sizeof(x509_buf *));
  FUNC_0(FUNC_13(&VAR_15, VAR_16, &VAR_17->issuer_id, 1));
  FUNC_0(FUNC_13(&VAR_15, VAR_16, &VAR_17->subject_id, 2));
  FUNC_0(FUNC_9(VAR_17->dnsnames, &VAR_15, VAR_16));

  if (VAR_15 != VAR_16)
    {
      VAR_13 = FUNC_6(VAR_2, ((void*)0), ((void*)0));
      return FUNC_6(VAR_3, VAR_13, ((void*)0));
    }

  VAR_16 = (const unsigned char*) VAR_9 + VAR_10;





  FUNC_0(FUNC_7(&VAR_15, VAR_16, &VAR_17->sig_oid2));

  if (!FUNC_4(&VAR_17->sig_oid1, &VAR_17->sig_oid2))
    return FUNC_6(VAR_4, ((void*)0), ((void*)0));

  FUNC_0(FUNC_12(&VAR_15, VAR_16, &VAR_17->sig));

  if (VAR_15 != VAR_16)
    {
      VAR_13 = FUNC_6(VAR_2, ((void*)0), ((void*)0));
      return FUNC_6(VAR_3, VAR_13, ((void*)0));
    }

  VAR_18 = FUNC_2(VAR_11, sizeof(*VAR_18));


  FUNC_0(FUNC_15(&VAR_18->subject, &VAR_17->subject,
                                VAR_12, VAR_11));


  FUNC_0(FUNC_15(&VAR_18->issuer, &VAR_17->issuer,
                                VAR_12, VAR_11));


  VAR_18->valid_from = VAR_17->valid_from;
  VAR_18->valid_to = VAR_17->valid_to;



  FUNC_0(FUNC_5(&VAR_18->digest, VAR_7, VAR_9, VAR_10,
                       VAR_11));


  FUNC_16(VAR_18, VAR_17, VAR_11, VAR_12);

  *VAR_8 = VAR_18;
  return VAR_6;
}
