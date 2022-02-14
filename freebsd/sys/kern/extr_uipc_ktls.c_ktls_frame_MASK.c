
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct tls_record_layer {scalar_t__ tls_vmajor; scalar_t__ tls_vminor; int tls_length; void* tls_type; } ;
struct mbuf_ext_pgs {int hdr_len; int trail_len; scalar_t__ npgs; scalar_t__ nrdy; void* record_type; scalar_t__ hdr; int tls; } ;
struct TYPE_3__ {struct mbuf_ext_pgs* ext_pgs; } ;
struct mbuf {int m_len; int m_flags; TYPE_1__ m_ext; struct mbuf* m_next; } ;
struct TYPE_4__ {int max_frame_len; int tls_hlen; int tls_tlen; scalar_t__ cipher_algorithm; int tls_bs; scalar_t__ tls_vmajor; scalar_t__ tls_vminor; scalar_t__ iv; } ;
struct ktls_session {scalar_t__ mode; TYPE_2__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (struct tls_record_layer*,int ,int ) ;
 int FUNC_2 (struct tls_record_layer*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ktls_session*) ;

int
FUNC_5(struct mbuf *VAR_12, struct ktls_session *VAR_13, int *VAR_14,
    uint8_t VAR_15)
{
 struct tls_record_layer *VAR_16;
 struct mbuf *VAR_17;
 struct mbuf_ext_pgs *VAR_18;
 uint64_t *VAR_19;
 uint16_t VAR_20;
 int VAR_21;

 VAR_21 = VAR_13->params.max_frame_len;
 *VAR_14 = 0;
 for (VAR_17 = VAR_12; VAR_17 != ((void*)0); VAR_17 = VAR_17->m_next) {





  if (VAR_17->m_len > VAR_21 || VAR_17->m_len == 0)
   return (VAR_3);
  VAR_20 = VAR_17->m_len;





  FUNC_0((VAR_17->m_flags & VAR_4) != 0,
      ("ktls_frame: mapped mbuf %p (top = %p)\n", VAR_17, VAR_12));

  VAR_18 = VAR_17->m_ext.ext_pgs;


  VAR_18->tls = FUNC_4(VAR_13);

  VAR_18->hdr_len = VAR_13->params.tls_hlen;
  VAR_18->trail_len = VAR_13->params.tls_tlen;
  if (VAR_13->params.cipher_algorithm == VAR_1) {
   int VAR_22, VAR_23;
   VAR_22 = VAR_13->params.tls_bs;
   VAR_23 = (VAR_20 + VAR_13->params.tls_tlen) & (VAR_22 - 1);
   VAR_18->trail_len -= VAR_23;
  }
  VAR_17->m_len += VAR_18->hdr_len + VAR_18->trail_len;


  VAR_16 = (void *)VAR_18->hdr;
  VAR_16->tls_vmajor = VAR_13->params.tls_vmajor;





  if (VAR_13->params.tls_vminor == VAR_9 &&
      VAR_13->params.tls_vmajor == VAR_7) {
   VAR_16->tls_vminor = VAR_10;
   VAR_16->tls_type = VAR_11;

   VAR_18->record_type = VAR_15;
  } else {
   VAR_16->tls_vminor = VAR_13->params.tls_vminor;
   VAR_16->tls_type = VAR_15;
  }
  VAR_16->tls_length = FUNC_3(VAR_17->m_len - sizeof(*VAR_16));
  if (VAR_13->params.cipher_algorithm == VAR_2 &&
      VAR_13->params.tls_vminor == VAR_10) {
   VAR_19 = (uint64_t *)(VAR_13->params.iv + 8);
   FUNC_2(VAR_16 + 1, *VAR_19);
   (*VAR_19)++;
  } else if (VAR_13->params.cipher_algorithm == VAR_1 &&
      VAR_13->params.tls_vminor >= VAR_8)
   FUNC_1(VAR_16 + 1, VAR_0, 0);
  if (VAR_13->mode == VAR_6) {
   VAR_17->m_flags |= VAR_5;
   VAR_18->nrdy = VAR_18->npgs;
   *VAR_14 += VAR_18->npgs;
  }
 }
 return (0);
}
