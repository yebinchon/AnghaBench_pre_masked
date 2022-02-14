
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int param_flags; scalar_t__ pathmaxrxt; void* sackdelay; scalar_t__ pathmtu; void* hbinterval; int asoc; } ;
struct sctp_sock {int param_flags; scalar_t__ pathmaxrxt; scalar_t__ sackdelay; scalar_t__ pathmtu; scalar_t__ hbinterval; } ;
struct sctp_paddrparams {int spp_flags; scalar_t__ spp_pathmaxrxt; scalar_t__ spp_sackdelay; scalar_t__ spp_pathmtu; scalar_t__ spp_hbinterval; } ;
struct sctp_association {int param_flags; scalar_t__ pathmaxrxt; void* sackdelay; scalar_t__ pathmtu; void* hbinterval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sctp_association*) ;
 int FUNC_2 (struct sctp_association*,scalar_t__) ;
 int FUNC_3 (struct sctp_sock*) ;
 int FUNC_4 (int ,struct sctp_transport*) ;
 int FUNC_5 (struct sctp_transport*,int ) ;

__attribute__((used)) static int FUNC_6(struct sctp_paddrparams *VAR_9,
           struct sctp_transport *VAR_10,
           struct sctp_association *VAR_11,
           struct sctp_sock *VAR_12,
           int VAR_13,
           int VAR_14,
           int VAR_15)
{
 int VAR_16;

 if (VAR_9->spp_flags & VAR_1 && VAR_10) {
  VAR_16 = FUNC_4 (VAR_10->asoc, VAR_10);
  if (VAR_16)
   return VAR_16;
 }





 if (VAR_9->spp_flags & VAR_2) {





  if (VAR_9->spp_flags & VAR_3)
   VAR_9->spp_hbinterval = 0;

  if (VAR_9->spp_hbinterval ||
      (VAR_9->spp_flags & VAR_3)) {
   if (VAR_10) {
    VAR_10->hbinterval =
        FUNC_0(VAR_9->spp_hbinterval);
   } else if (VAR_11) {
    VAR_11->hbinterval =
        FUNC_0(VAR_9->spp_hbinterval);
   } else {
    VAR_12->hbinterval = VAR_9->spp_hbinterval;
   }
  }
 }

 if (VAR_13) {
  if (VAR_10) {
   VAR_10->param_flags =
    (VAR_10->param_flags & ~VAR_0) | VAR_13;
  } else if (VAR_11) {
   VAR_11->param_flags =
    (VAR_11->param_flags & ~VAR_0) | VAR_13;
  } else {
   VAR_12->param_flags =
    (VAR_12->param_flags & ~VAR_0) | VAR_13;
  }
 }






 if ((VAR_9->spp_flags & VAR_5) && VAR_9->spp_pathmtu) {
  if (VAR_10) {
   VAR_10->pathmtu = VAR_9->spp_pathmtu;
   FUNC_1(VAR_11);
  } else if (VAR_11) {
   VAR_11->pathmtu = VAR_9->spp_pathmtu;
   FUNC_2(VAR_11, VAR_9->spp_pathmtu);
  } else {
   VAR_12->pathmtu = VAR_9->spp_pathmtu;
  }
 }

 if (VAR_14) {
  if (VAR_10) {
   int VAR_17 = (VAR_10->param_flags & VAR_5) &&
    (VAR_9->spp_flags & VAR_6);
   VAR_10->param_flags =
    (VAR_10->param_flags & ~VAR_4) | VAR_14;
   if (VAR_17) {
    FUNC_5(VAR_10, FUNC_3(VAR_12));
    FUNC_1(VAR_11);
   }
  } else if (VAR_11) {
   VAR_11->param_flags =
    (VAR_11->param_flags & ~VAR_4) | VAR_14;
  } else {
   VAR_12->param_flags =
    (VAR_12->param_flags & ~VAR_4) | VAR_14;
  }
 }





 if ((VAR_9->spp_flags & VAR_8) && VAR_9->spp_sackdelay) {
  if (VAR_10) {
   VAR_10->sackdelay =
    FUNC_0(VAR_9->spp_sackdelay);
  } else if (VAR_11) {
   VAR_11->sackdelay =
    FUNC_0(VAR_9->spp_sackdelay);
  } else {
   VAR_12->sackdelay = VAR_9->spp_sackdelay;
  }
 }

 if (VAR_15) {
  if (VAR_10) {
   VAR_10->param_flags =
    (VAR_10->param_flags & ~VAR_7) |
    VAR_15;
  } else if (VAR_11) {
   VAR_11->param_flags =
    (VAR_11->param_flags & ~VAR_7) |
    VAR_15;
  } else {
   VAR_12->param_flags =
    (VAR_12->param_flags & ~VAR_7) |
    VAR_15;
  }
 }




 if (VAR_9->spp_pathmaxrxt) {
  if (VAR_10) {
   VAR_10->pathmaxrxt = VAR_9->spp_pathmaxrxt;
  } else if (VAR_11) {
   VAR_11->pathmaxrxt = VAR_9->spp_pathmaxrxt;
  } else {
   VAR_12->pathmaxrxt = VAR_9->spp_pathmaxrxt;
  }
 }

 return 0;
}
